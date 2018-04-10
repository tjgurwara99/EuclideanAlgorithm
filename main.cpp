#include<stdio.h>
#include<sstream>
#include"prime/prime.h"

int main(int argc, char** argv){
        if(argc == 3){
                cpp_int n, m, ans;
                std::istringstream iss( argv[1]);
                if(iss >> n){
                        iss.clear();
                        iss.str(argv[2]);
                        if(iss >> m){
                                ans = GCD(n,m);
				std::cout<<"GCD of " << n <<" and "<< m <<" is "<<ans<<std::endl;
                        }
			else{
				std::cout <<"Arguments can only be numbers.\n"\
                                 "Please check your arguments and refer to the documentation for further information.\n";
			}
                }
                else{
                        std::cout<<"Arrguments can only be numbers. \n" \
                          "Please check your arguments and refer to the documentation for further information.\n";
                }
        }
	else{
		printf("Incorrect number of arguments\n");
	}
}
