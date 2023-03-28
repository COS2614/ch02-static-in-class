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


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass obj1, obj2, obj3;
    qDebug() << "Number of instances created: " << MyClass::getInstanceCount();

    return 0;
}
