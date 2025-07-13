#pragma once

#include <string>
#include <vector>

struct Color {

  unsigned char r, g, b;
  Color(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0)
      : r(r), g(g), b(b) {}
};

extern const int largura;
extern const int altura;
extern std::vector<Color> framebuffer;

void drawPixel(int x, int y, const Color &cor);
void limparFramebuffer(const Color &cor);
void salvarComoPPM(const std::string &nomeArquivo);
