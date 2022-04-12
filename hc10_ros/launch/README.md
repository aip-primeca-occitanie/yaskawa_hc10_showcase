# User launches
## simulation_gazebo.launch
### includes:
```
hc10_gazebo.launch
hc10_control_pid.launch
```

---
## simulation_gazebo_with_env.launch
### includes:
```
hc10_gazebo_env.launch
hc10_control_pid.launch
```

---
## simulation_moveit_rviz.launch
### includes:
```
planning_context.launch
robot_interface_simulator.launch (from industrial_robot_simulator)
robot_interface_streaming_hc10.launch (from motoman_hc10_support)
move_group.launch
moveit_rviz.launch
```
### args:
```
sim           :=  'false'
robot_ip      :=  '192.168.1.40'
controller    :=  'yrc1000'
```

---
## simulation_torque.launch
### includes:
```
hc10_gazebo.launch
hc10_torque_control.launch
```
# Pre-generated launches (do not modify)
## hc10_gazebo.launch
### includes:
```

```