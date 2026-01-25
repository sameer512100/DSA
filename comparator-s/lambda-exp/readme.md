this is another way to write comparators

# Comparator using Lambda Expressions

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    // Custom comparator using lambda expression
    std::sort(people.begin(), people.end(), [](const Person &a, const Person &b) {
        return a.age < b.age; // Sort by age in ascending order
    });

    for (const auto &person : people) {
        std::cout << person.name << " is " << person.age << " years old." << std::endl;
    }

    return 0;
}
```


/// <summary>
/// Lambda expression with capture clause using square brackets [].
/// </summary>
/// <remarks>
/// The square brackets [] in a lambda expression define the capture clause, which specifies
/// how variables from the surrounding scope are captured and made available within the lambda body.
/// 
/// Capture Modes:
/// - [] : No variables captured (default capture mode)
/// - [=] : All variables captured by value (copy)
/// - [&] : All variables captured by reference
/// - [this] : Capture the current object pointer
/// - [x, &y] : Mix of captures - x by value, y by reference
/// - [=, &x] : Capture all by value except x by reference
/// - [&, x] : Capture all by reference except x by value
/// 
/// Important Notes on Square Brackets for Variable Access:
/// 
/// 1. CAPTURE BY VALUE [=]:
///    Variables are copied into the lambda at definition time. Changes to original variables
///    don't affect the lambda's copy. Use when you need snapshot behavior.
/// 
/// 2. CAPTURE BY REFERENCE [&]:
///    Variables are accessed by reference. The lambda sees real-time changes to original variables.
///    Use when you need to access current state, but be careful about variable lifetime.
/// 
/// 3. MIXED CAPTURES [x, &y]:
///    Provides fine-grained control over which variables are captured by value vs reference.
///    x is copied (safe), y is referenced (efficient for large objects).
/// 
/// 4. LIFETIME CONSIDERATION:
///    When capturing by reference, ensure the referenced variables outlive the lambda execution.
///    Capturing by value is safer but uses more memory.
/// 
/// 5. MUTABLE LAMBDAS:
///    By default, captured variables are const in the lambda body. Use 'mutable' keyword
///    to modify copies of by-value captures.
/// </remarks>