#include "framebuffer.hpp"
#include <fstream>
#include <iostream>

#include <vector>

const int largura = 80;
const int altura = 60;
std::vector<Color> framebuffer(largura *altura);

void drawPixel(int x, int y, const Color &cor) {
  if (x < 0 || x >= largura || y < 0 || y >= altura)
    return;
  framebuffer[y * largura + x] = cor;
}

void limparFramebuffer(const Color &cor) {
  for (int y = 0; y < altura; ++y) {
    for (int x = 0; x < largura; ++x) {
      drawPixel(x, y, cor);
    }
  }
}

void salvarComoPPM(const std::string &nomeArquivo) {
  std::ofstream arquivo(nomeArquivo);
  if (!arquivo) {
    std::cerr << "Erro  ao abrir o arquivo para escrita.\n";
    return;
  }

  arquivo << "P3\n";
  arquivo << largura << "" << altura << "\n";
  arquivo << "255\n";

  for (int y = 0; y < altura; ++y) {
    for (int x = 0; x < largura; ++x) {
      const Color &cor = framebuffer[y * largura + x];
      arquivo << (int)cor.r << "" << (int)cor.g << "" << (int)cor.b << "";
    }
    arquivo << "\n";
  }
  arquivo.close();
}
