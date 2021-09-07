#include <QtTest>

// add necessary includes here

class autotest : public QObject
{
    Q_OBJECT

public:
    autotest();
    ~autotest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

autotest::autotest()
{

}

autotest::~autotest()
{

}

void autotest::initTestCase()
{

}

void autotest::cleanupTestCase()
{

}

void autotest::test_case1()
{
    QCOMPARE(1+2, 3);
}

QTEST_APPLESS_MAIN(autotest)

#include "tst_autotest.moc"
