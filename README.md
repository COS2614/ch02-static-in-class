# ch02-static-in-class

## Demonstrates the correct use of static data members and static member functions in a class

In this program, we have a class **MyClass** which has a static data member **m_InstanceCount** to keep track of the number of instances of this class that have been created. The constructor and destructor of **MyClass** both increment and decrement this static member, respectively.

We also have a static member function **getInstanceCount** which returns the value of **m_InstanceCount**.

In the main function, we create three instances of **MyClass** and then use the **getInstanceCount** function to get the total number of instances created. Finally, we print the result using **qDebug**.

When you run this program, you should see the output "Number of instances created: 3" printed to the console. This demonstrates the correct use of static data members and static member functions in a class.
