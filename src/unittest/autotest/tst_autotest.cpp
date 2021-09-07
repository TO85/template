#include <QtTest>

// add necessary includes here
#include "../../libs/tplBase/tplBase.h"

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
    void test_tplBase();

private:
    const tplBase cmBase85 = tplBase(85);
};

autotest::autotest()
{

}

autotest::~autotest()
{

}

void autotest::initTestCase()
{
    QCOMPARE(85, cmBase85);
    QCOMPARE(1, cmBase85.sign());
}

void autotest::cleanupTestCase()
{

}

void autotest::test_case1()
{
    QCOMPARE(1+2, 3);
}

#if 1
void autotest::test_tplBase()
{
    tplBase baseNull;
    QCOMPARE(0, baseNull.base());
    QCOMPARE(0, baseNull());
    QVERIFY(0 == baseNull());
    QCOMPARE(0, baseNull);
    QCOMPARE(0, baseNull.sign());
    QVERIFY(1 != baseNull);

    tplBase baseFortyOne(41);
    QCOMPARE(41, baseFortyOne);
    QVERIFY(40 != baseFortyOne());
    QVERIFY(41 == baseFortyOne());
    QVERIFY(42 != baseFortyOne());
    QCOMPARE(baseFortyOne.addition(1), baseFortyOne.addition(1));
    QCOMPARE(40, baseFortyOne.addition(-1));
    QCOMPARE(42, baseFortyOne.addition(+1));
    QCOMPARE(82, baseFortyOne.multiplication(2));
    QVERIFY(baseFortyOne.add(1) != baseFortyOne.add(1));
    QCOMPARE(43, baseFortyOne);

    baseFortyOne.sign(-85);
    QVERIFY(-85 != baseFortyOne);
    QCOMPARE(-43, baseFortyOne);
}
#endif


QTEST_APPLESS_MAIN(autotest)

#include "tst_autotest.moc"
