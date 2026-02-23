# Robotics Control System

Build a robotics control system in C++ that manages multiple robot types through a central `RobotControlCenter`. Derive `DeliveryRobot` and `MaintenanceRobot` from a polymorphic base `Robot` class, each implementing its own task execution logic. The control center maintains a fleet of robots and executes all of their tasks in sequence. Incorporate custom exception classes so that robots with critically low battery or invalid states throw and propagate meaningful errors at runtime.
