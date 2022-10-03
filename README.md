# Design Patterns - CPP

## Requirement / Install

Please refer to `INSTALL_${OS}` for CMake 3.20.0 - LTS.

## SOLID

### Single Responsibility Principle (SRP)

Each class has only one responsibility, and therefore has only one reason to change. 

### Open-Closed Principle (OCP)

Classes should be open for extension and closed for modification.

### Liskov Substitution Principle (LSP)

If an interface takes an object of type Parent, it should equally take an object of type Child without anything breaking.

### Interface Segregation Principle (ISP)

No complicated interface allowed. Big ones should be separated into multiple small ones. Classes should implement only functionality ones that they really need to. 

### Dependency Inversion Principle (DIP)

* High-level modules should not depend on low-level modules. Both should depend on abstractions.
* Abstractions should not depend on details. Details should depend on abstractions.

