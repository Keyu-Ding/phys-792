#include <iostream>
#include <TRandom3.h>
#include <TH1F.h>
#include <TCanvas.h>

int main ()
{
	TH1F h("h",";Height[cm];",20,100,300);
	TRandom generator(0);
	
	for(int i=0;i<160;i++) h.Fill(generator.Gaus(170,20));
	
	TCanvas can;
	h.Draw();
	can.Print("height.jpg");
}
