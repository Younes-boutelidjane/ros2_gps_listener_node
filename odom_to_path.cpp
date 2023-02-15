#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"

class GPSOdomListener : public rclcpp::Node
{
public:
  GPSOdomListener()
  : Node("gps_odom_listener")
  {
    // Create a subscriber for the gps_odom topic
    sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "gps_odom", std::bind(&GPSOdomListener::callback, this, std::placeholders::_1));
  }

private:
  // Callback function to handle incoming messages
  void callback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    // Access the x, y position data
    float x = msg->pose.pose.position.x;
    float y = msg->pose.pose.position.y;

    RCLCPP_INFO(this->get_logger(), "Received gps_odom: x=%f, y=%f", x, y);
  }

  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<GPSOdomListener>();

  rclcpp::spin(node);

  return 0;
}
