#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <assert.h>

#include <TCanvas.h>
#include <TH1F.h>
#include "baseTree.hh"
using namespace std;

int main(int argc, char *argv[])
{
    std::cout<<"Generate basic plots"<<std::endl;
    //TODO: INCLUDE NuE sample
    
    baseTree *pbaseTree = new baseTree();
    //data
    std::cout<<" DATA "<<std::endl;
    //require two forward track
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew.root","../outputs/basicHisto_datamcfsi_oldsel_correctm2trk.root");
    
    //more2track require >475 vertex activity to reduce signal contamination
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew.root","../outputs/basicHisto_datamcfsi_oldsel_correctm2trk_optimized.root");
    
    //final
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew.root","../outputs/basicHisto_datamcfsi_finalcomb.root");
    //add one track with vertex activity and without activity--> need to be contained?
    //add muon+proton track with vertex activity and without activity--> need to be contained?
    //muon mucl>0.6, pion pmucl>0.6, proton pmucl<0.2
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4test.root");
    
    //muon mucl>0.6, pion pmucl>0.26, proton pmucl<0.05
   // pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4testv2.root");
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4testv2_addnue.root");
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_genie_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_genie_datamcfsi_finalcomb_sam4testv2_addnue.root");
    
     //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4testv2_addnue_4pidvalidate.root");
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_genie_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_genie_datamcfsi_finalcomb_sam4testv2_addnue_4validate.root");
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_genie_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_genie_datamcfsi_finalcomb_sam4testv2_addnue_4validate_veract.root");
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4testv2_addnue_4validate_veract.root");
    
      //analysis I
     //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4testv2_addnue_ana1.root");
  //pbaseTree->MakeBasicHisto("../../datafsi/datamc_genie_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_genie_datamcfsi_finalcomb_sam4testv2_addnue_ana2.root");
    
    pbaseTree->MakeBasicHisto("../../datafsicornorange/datamc_genie_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_genie_datamcfsi_finalcomb_sam4testv2_addnue_morepid_ana2.root");
   // pbaseTree->MakeBasicHisto("../../datafsicornorange/datamc_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4testv2_addnue_morepid_ana2.root");
    
   //pbaseTree->MakeBasicHisto("../../datafsi/datamc_merged_ccqe_addpidFFnew_addnue.root","../outputs/basicHisto_datamcfsi_finalcomb_sam4testv2_addnue_veractMINERvA.root");
    //genie
    //pbaseTree->MakeBasicHisto("../../datafsi/datamc_genie_merged_ccqe_addpidFFnew.root","../outputs/basicHisto_datamcfsi_finalcomb_genie.root");
    
    
    std::cout<<"Processing successfully"<<std::endl;
    return 0;
}
