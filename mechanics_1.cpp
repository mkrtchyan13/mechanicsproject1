
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int initial_s;      // Car’s initial speed 
    int initial_d;      // Intial distance to the intersection 
    int duration_y;     // Duration of the yellow light 
    int intersect_w;    // Intersection’s width 
    int pos_acc;        // Magnitude of car’s constant positive acceleration 
    int neg_acc;        // Magnitude of car’s constant negative acceleration
	
	cout<<"Input initial speed of a car"<<endl;
	if(initial_s>=20 && initial_s<=80){
        cin>>initial_s;
    }
    else{
        cout<<"The value must be between 20 and 80";
        return 0;
    }


	cout<<"Input initial distance"<<endl;
    if(initial_d>=10 && initial_d<=150){	    
        cin>>initial_d;
    }
    else{
        cout<<"The value must be between 10 and 150";
        return 0;
    }


	cout<<"Input duration of the yellow light"<<endl;
    if( duration_y>=2 && duration_y<=5 ){
	    cin>>duration_y;
    } else{
        cout<<"The value must be between 2 and 5";
        return 0;
    }
	

	cout<<"Input intersection width"<<endl;
	if(intersect_w >= 5 && intersect_w <= 20){    
        cin>>intersect_w;
    } else{
        cout<<"The value must be between 5 and 20";
        return 0;
    }

	
	cout<<"Input magnitude of car’s constant positive acceleration."<<endl;
	if(pos_acc >= 1 && pos_acc <=3 ){    
        cin>>pos_acc;
    } else{
        cout<<"The value must be between 1 and 3";
        return 0;
    }


	cout<<"Input magnitude of car constant negative acceleration"<<endl;
	if(neg_acc >= 1 && neg_acc <=3 ){    
        cin>>neg_acc;
    } else{
        cout<<"The value must be between 1 and 3";
        return 0;
    }

		
	if(initial_s * 0.27 * duration_y >= initial_d + intersect_w && initial_s * 0.27 * duration_y * duration_y  + pos_acc *duration_y*duration_y/2 >= initial_d + intersect_w)
	{
		cout<<"Quickly run through before the light turns red";
	}
	else ( initial_s * 0.27* duration_y - neg_acc * duration_y * duration_y/2 <= initial_d)
	{
		cout<<"Car needs to stop";
	}


////


#include <iostream>
#include <string>
using namespace std;
int main()
{
	int initial_s;      // Car’s initial speed 
    int initial_d;      // Intial distance to the intersection 
    int duration_y;     // Duration of the yellow light 
    int intersect_w;    // Intersection’s width 
    int pos_acc;        // Magnitude of car’s constant positive acceleration 
    int neg_acc;        // Magnitude of car’s constant negative acceleration
	
		cout<<"Input initial speed of a car"<<endl;
	if(initial_s>=20 && initial_s<=80){
        cin>>initial_s;
    }
    else{
        cout<<"The value must be between 20 and 80";
        return 0;
    }


	cout<<"Input initial distance"<<endl;
    if(initial_d>=10 && initial_d<=150){	    
        cin>>initial_d;
    }
    else{
        cout<<"The value must be between 10 and 150";
        return 0;
    }


	cout<<"Input duration of the yellow light"<<endl;
    if( duration_y>=2 && duration_y<=5 ){
	    cin>>duration_y;
    } else{
        cout<<"The value must be between 2 and 5";
        return 0;
    }
	

	cout<<"Input intersection width"<<endl;
	if(intersect_w >= 5 && intersect_w <= 20){    
        cin>>intersect_w;
    } else{
        cout<<"The value must be between 5 and 20";
        return 0;
    }

	
	cout<<"Input magnitude of car’s constant positive acceleration."<<endl;
	if(pos_acc >= 1 && pos_acc <=3 ){    
        cin>>pos_acc;
    } else{
        cout<<"The value must be between 1 and 3";
        return 0;
    }


	cout<<"Input magnitude of car constant negative acceleration"<<endl;
	if(neg_acc >= 1 && neg_acc <=3 ){    
        cin>>neg_acc;
    } else{
        cout<<"The value must be between 1 and 3";
        return 0;
    }

    int max_max = 2.7 * 100; //computed with max v maximum value which is 100
    int max_min = 2.7 * 50; //computed with min v minimum value which is 50
    int value = initial_s * duration_y * 0.27;

	
	if(val >= max_min && val<= max_max && val >= initial_d + intersect_w && val * duration_y  + pos_acc *duration_y*duration_y/2 >= initial_d + intersect_w)
	{
		cout<<"Quickly run through before the light turns red";
	}
	else (val - neg_acc * duration_y * duration_y/2 <= initial_d)
	{
		cout<<"Car needs to stop";
	}
