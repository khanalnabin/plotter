#pragma once

struct Color {
	float r, g, b, a;
	Color(float _r, float _g, float _b) : r(_r), g(_g), b(_b), a(1.0f) {}
	Color(float _r, float _g, float _b, float _a)
	    : r(_r), g(_g), b(_b), a(_a) {}
	Color() : r(1.0f), g(1.0f), b(1.0f), a(1.0f) {}
};

class Angel {
  public:
	Angel();

	static void init(unsigned int width, unsigned int height);

	static void putPixel(int x, int y, int width);
	static void putPixel(int x, int y, int width, Color c);
	static void putPixel(int x, int y, Color c);
	static void putPixel(int x, int y);

	static void drawAxes(Color c = Color());
	static void enable();
	static void disable();
	static void setHeight(unsigned int height);
	static void setWidth(unsigned int width);
	static unsigned int getWidth();
	static unsigned int getHeight();

  private:
	static unsigned int m_ID;
	static unsigned int m_shader_ID;
	static Color m_color;
	static int m_width;
	static int m_height;
};
