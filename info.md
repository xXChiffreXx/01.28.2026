**Problem (no solution): Collaborative OOP build**

Three developers are working on a small library.

### Roles

* **Dev A** builds the **base class**.
* **Dev B** builds **DerivedOne**.
* **Dev C** builds **DerivedTwo**.

### Requirements

Dev A creates a base class called `Shape` with:

1. A constructor that takes a `name` (string).
2. A method `area()` that must be implemented by derived classes.
3. A method `perimeter()` that must be implemented by derived classes.
4. A non-virtual method `describe()` that returns a string like:
   `"<name>: area=<area>, perimeter=<perimeter>"`

Dev B creates `Rectangle : Shape` with:

* Constructor takes `width` and `height`
* Implements `area()` and `perimeter()`
* Validates width/height are positive (decide how to handle invalid input)

Dev C creates `Circle : Shape` with:

* Constructor takes `radius`
* Implements `area()` and `perimeter()`
* Validates radius is positive

### Integration test (must pass)

Write a short test/program that:

1. Creates a list of shapes: one rectangle and one circle.
2. Prints `describe()` for each.
3. Computes and prints the **total area** of all shapes.

### Constraints

* Dev B and Dev C are **not allowed to modify** Dev A’s base class once it’s published.
* Dev A is **not allowed to reference** Rectangle or Circle in the base class.
* Your design must prevent someone from instantiating `Shape` directly (unless you explicitly justify why it should be instantiable).

**Deliverable:** Define the classes and the test program that meets the above requirements.
