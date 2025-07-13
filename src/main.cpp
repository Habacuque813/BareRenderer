#include "framebuffer.hpp"

int main() {
  limparFramebuffer(Color(0, 0, 0));

  // Pixels coloridosa

  drawPixel(10, 10, Color(255, 0, 0));
  drawPixel(11, 10, Color(0, 255, 0));
  drawPixel(12, 10, Color(0, 0, 255));

  salvarComoPPM("assets/imagem.ppm");
  return 0;
}
