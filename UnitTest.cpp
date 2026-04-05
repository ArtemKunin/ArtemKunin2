#include "CppUnitTest.h"
#include "../zadanie2/ForceSolver.h"
#include "../zadanie2/DichotomySolver.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
double testFunction(double x)
{
    return x * x - 4.0;
}
namespace Tests
{
    TEST_CLASS(RootSolverTests){
        public :
            TEST_METHOD(BruteForce_Finds_Root_Success){
                double a = 0.0;
    double b = 5.0;
    double step = 0.001;
    double expectedRoot = 2.0;
    BruteForceSolver solver;
    double actualRoot = solver.solve(a, b, step, testFunction);
    Assert::AreEqual(expectedRoot, actualRoot, 0.01);
}
TEST_METHOD(Dichotomy_Finds_Root_Success)
{
    double a = 0.0;
    double b = 5.0;
    double step = 0.001;
    double expectedRoot = 2.0;
    DichotomySolver solver;
    double actualRoot = solver.solve(a, b, step, testFunction);
    Assert::AreEqual(expectedRoot, actualRoot, 0.01);
}
}
;
}