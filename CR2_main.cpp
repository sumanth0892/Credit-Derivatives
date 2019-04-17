#include <iostream>
#include "CR2.h"

using namespaces std;

int main()
{
	cout<<"\n *** START CR2: Credit Default Swap ***\n";
	
	//STEP 1: Input parameters
	auto T = 1.0;
	auto N = 4;
	auto notional = 100.0
	auto r = 0.05;
	auto h = 0.01;
	auto rr = 0.50;
	
	CR2 cr2(T,N,notional, r, h, rr); //CR2 object

	//Obtain the value of premium from member function
	"get_premium()":
	auto cr2_results = 
			cr2.get_pv_premium_and_default_legs_and_cds_spread();
	
	//OUTPUT parameters
	cout<<"\n PV premium leg = "<<cr2_results.pv_premium_leg<<"\n";
	cout<<"\n PV default leg = "<<cr2_results.pv_default_leg<<"\n";
	cout<<"\n cds_spread  = "<<cr2_results.cds_spread_in_bps<<"\n";
	return 0;
}

