#include <iostream>
#include <Windows.h>
using namespace std;

int sum(int a, int b) {
  return a + b;
}
int(*j) (int, int);
int main()
{
  SetConsoleOutputCP(1251);
  SetConsoleCP(1251);
  bool t = true;
  bool f = false;
  char d = 'o';
  char g = 'о';
  wchar_t h = L'P';
  wchar_t e = L'П';
  short px = 20; // 00 14
  short mx = -20; // ff ec
  short max = 32767; // 7f ff
  short min = -32768;  // 80 00
  short xmax = 0x7FFF; // 32767
  short xmin = 0x8000; // -32768
  unsigned short uxmax = 0xFFFF; // 65535
  unsigned short uxmin = 0x0000; // 0
  int py = 21; // 00 00 00 15
  int my = -21; // ff ff ff eb
  int imax = 0x7FFFFFFF; // 2147483647
  int imin = 0x80000000; // -2147483648
  int uimax = 0xFFFFFFFF; // 4294967295
  int uimin = 0x00000000; // 0
  long pz = 22; // 00 00 00 16
  long mz = -22; // ff ff ff ea
  long lmax = 0x7FFFFFFF; // 2147483647
  long lmin = 0x80000000; // -2147483648
  int ulmax = 0xFFFFFFFF; // 4294967295
  int ulmin = 0x00000000; // 0
  float ps = 11.0; 
  float ms = -11.0;
  float inf1 = ps / 0; // inf
  float inf2 = ms / 0;// -inf
  float ind1 = inf2 / inf1; // -nan(ind)
  char* ptrc = &d;
  wchar_t* ptrwc = &h;
  short* ptrs = &px;
  int* ptri = &py;
  float* ptrf = &ps;
  double forptrd = 5.6;
  double* ptrd = &forptrd;
  ptrc += 3;
  ptri += 3;
  j = sum;
  j(6, 7);
}
