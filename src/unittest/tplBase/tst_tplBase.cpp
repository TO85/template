#include <QtTest>

// add necessary includes here

class tplBase : public QObject
{
    Q_OBJECT

public:
    tplBase();
    ~tplBase();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

tplBase::tplBase()
{

}

tplBase::~tplBase()
{

}

void tplBase::initTestCase()
{

}

void tplBase::cleanupTestCase()
{

}

void tplBase::test_case1()
{
    QCOMPARE(1+2, 3);
}

QTEST_APPLESS_MAIN(tplBase)

#include "tst_tplBase.moc"
