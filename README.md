# BareRenderer 🧱🎨

Um renderizador manual em C++, feito do zero, com foco em aprendizado de fundamentos gráficos.

> Nenhuma biblioteca gráfica é usada. Só pixels, memória e criatividade.

---

## 💡 Propósito

Esse projeto simula um sistema de renderização "na mão", onde cada pixel é manipulado diretamente na memória (framebuffer), com o objetivo de:

- Entender como engines e jogos manipulam imagens na base
- Praticar C++ moderno com foco em arquitetura limpa
- Construir visualizações simples em imagens `.ppm` (sem bibliotecas externas)

---

## 📐 Estrutura do projeto

- `src/main.cpp` – Entrada principal e testes
- `src/framebuffer.hpp/.cpp` – Buffer de imagem e funções como `drawPixel`
- `assets/` – Saída das imagens `.ppm`

---

## 📸 Exemplo gerado

```plaintext
imagem.ppm
