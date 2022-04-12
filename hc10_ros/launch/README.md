# User launches
## simulation_gazebo.launch
### include:
```py
hc10_gazebo.launch
hc10_control_pid.launch
```

___
## simulation_gazebo_with_env.launch
### include:
```py
hc10_gazebo_env.launch
hc10_control_pid.launch
```

___
## simulation_moveit_rviz.launch
### include:
```py
planning_context.launch
robot_interface_simulator.launch (from industrial_robot_simulator)
robot_interface_streaming_hc10.launch (from motoman_hc10_support)
move_group.launch
moveit_rviz.launch
```
### arg:
```py
sim           :=  'false'
robot_ip      :=  '192.168.1.40'
controller    :=  'yrc1000'
```

___
## simulation_torque.launch
### include:
```py
hc10_gazebo.launch
hc10_torque_control.launch
```
# Pre-generated launches (do not modify)
## hc10_gazebo.launch & hc10_gazebo_env.launch
### include:
```py
empty_world.launch (from gazebo_ros)
```
### arg:
```py
paused      :=  'true'
gazebo_gui  :=  'true'
urdf_path
```
### node:
```py
spawn_gazebo_model
```

___
## hc10_control_pid.launch
### rosparam:
```py
control.yaml
```
### node:
```py
controller_spawner
robot_state_publisher #publish to /motoman_hc10/joint_states
```

___
## hc10_control_torque.launch
### rosparam:
```py
control_torque.yaml
```
### node:
```py
controller_torque_spawner
robot_state_publisher_torque #publish to /motoman_hc10/joint_states
```