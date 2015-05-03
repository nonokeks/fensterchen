#include <fensterchen.hpp>
#include <point2d.hpp>
#include <color.hpp>
#include <circle.hpp>
#include <rectangle.hpp>

int main(int argc, char* argv[])
{
  Window win(glm::ivec2(800,800));

  Rectangle r1{0.3, 0.2, 0.5, 0.5, 1.0, 0.0, 0.0};
  r1.draw(win);

  Circle c1{0.1, 0.2, 0.5, 1.0, 0.0, 0.0};
  c1.draw(win);

  Color blau{0.0, 0.0, 1.0};

  while (!win.shouldClose()) {
    if (win.isKeyPressed(GLFW_KEY_ESCAPE)) {
      win.stop();
    } 

    auto m = win.mousePosition();

    if (r1.is_inside(m))
    {
      r1.draw(win, blau);
    }
    else{
      r1.draw(win);
    }

    if (c1.is_inside(m))
    {
      c1.draw(win, blau);
    }
    else{
      c1.draw(win);
    }

    //Rectangle r2{0.06, 0.06, 0.8, 0.5};
    //r2.draw(win, blau);

    //Circle c2{0.1, 0.2, 0.8};
    //c2.draw(win, blau);

    /*auto t = win.getTime();
    float x1(0.5 + 0.5 * std::sin(t));
    float y1(0.5 + 0.5 * std::cos(t));

    float x2(0.5 + 0.5 * std::sin(2.0*t));
    float y2(0.5 + 0.5 * std::cos(2.0*t));

    float x3(0.5 + 0.5 * std::sin(t-10.f));
    float y3(0.5 + 0.5 * std::cos(t-10.f));

    win.drawPoint(x1, y1, 1.0, 0.0, 0.0);
    win.drawPoint(x2, y2, 0.0, 1.0, 0.0);
    win.drawPoint(x3, y3, 0.0, 0.0, 1.0);

    auto m = win.mousePosition();
    win.drawLine(0.1f, 0.1f, 0.8f,0.1f, 1.0,0.0,0.0);

    win.drawLine(0.0f, m.y, 0.01f, m.y, 0.0, 0.0, 0.0);
    win.drawLine(0.99f, m.y,1.0f, m.y, 0.0, 0.0, 0.0);

    win.drawLine(m.x, 0.0f, m.x, 0.01f, 0.0, 0.0, 0.0);
    win.drawLine(m.x, 0.99f,m.x, 1.0f, 0.0, 0.0, 0.0);
    */

    win.update();
  }

  return 0;
}
