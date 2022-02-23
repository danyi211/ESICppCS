#include<iostream>
#include "TTree.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TStyle.h"

using namespace std;

int main()
{
    TTree *t = new TTree("t", "tree from .csv");
    t->ReadFile("../../ESIPAPCpp/sessions/session4/sensor2.csv",
                "Energy1/D:Energy2:Temperature:Pressure:RelativeHumidity");
    
    TH1F *h_E1 = new TH1F("h_E1","", 20, 40, 60);
    t->Project("h_E1", "Energy1");

    TCanvas *can = new TCanvas("canvas", "", 600, 400);
    gStyle->SetOptStat(0);

    h_E1->Draw("E");

    can->Print("Energy.png");

}
