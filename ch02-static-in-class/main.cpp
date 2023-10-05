#include <QtCore>


class MyClass
{
private:
    static int m_InstanceCount;

public:
    MyClass() { m_InstanceCount++; }
    ~MyClass() { m_InstanceCount--; }

    static int getInstanceCount() { return m_InstanceCount; }
};


int MyClass::m_InstanceCount = 0;


void createInstancesOnStack()
{
    MyClass obj1, obj2, obj3;
    qDebug() << "Number of instances created on the stack: " << MyClass::getInstanceCount();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    createInstancesOnStack();   // Destructor is called when stack objects go out of scope
    qDebug() << "Objects created on the stack have been deleted";
    qDebug() << "Number of instances remaining: " << MyClass::getInstanceCount();

    return 0;
}
