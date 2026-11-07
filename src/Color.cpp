#include "Color.hpp"

namespace Colors {

    Color red(1.0, 0.0, 0.0);
    Color black(0.0, 0.0, 0.0);
    Color green(0.0, 1.0, 0.0);
    Color blue(0.0, 0.0, 1.0);
    Color yellow(1.0, 1.0, 0.0);
    Color white(1.0, 1.0, 1.0);

    Color MixColor(Color& a, Color& b)
    {
        return (a + b) / 2.0;
    }
}