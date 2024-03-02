# GPS Odom Path

## Overview

This project is a simple ROS 2 node that listens to GPS odometry messages and prints the x and y position data to the console. It demonstrates how to create a ROS 2 node using the rclcpp library and subscribe to messages published on a specific topic.

## Features

- Subscribes to GPS odometry messages
- Prints x and y position data to the console

## Dependencies

- ROS 2 Foxy or later
- rclcpp
- nav_msgs
- sensor_msgs

## Build Instructions

1. Clone the repository to your ROS 2 workspace:

    ```bash
    git clone https://github.com/Younes-boutelidjane/gps_odom_path.git
    ```

2. Navigate to your ROS 2 workspace:

    ```bash
    cd /path/to/your/ros2_workspace
    ```

3. Build the project using colcon:

    ```bash
    colcon build --packages-select gps_odom_path
    ```

## Usage

1. Make sure you have a ROS 2 environment set up and sourced:

    ```bash
    source /path/to/ros2/install/setup.bash
    ```

2. Run the node:

    ```bash
    ros2 run gps_odom_path odom_to_path
    ```

## Contributing

Contributions to the project are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
