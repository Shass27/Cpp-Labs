# Restaurant Reservation Management System

Design a restaurant reservation system in C++ that manages a fixed number of tables and an automatic customer waitlist. Customers are represented using `shared_ptr` for safe shared ownership across the system. When all tables are occupied, new customers are placed on the waitlist automatically. Releasing a table should seat the next waiting customer. Practice smart pointers, queue-based waitlist management, and clean encapsulation within the `Restaurant`, `Table`, and `Customer` classes.
