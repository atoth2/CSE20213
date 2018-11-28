#include <iostream>
#include <cmath>

using namespace std;

struct Point {  //pointer with lat and longitude values
   double lat,lon;
};

double GCDistance(const Point*, const Point*);

int main(){
    double dist = 0;                                     // distance total value
    Point previous, current;                             // make a pointer for previous and current lat and lons
    int i = 0;                                           // set int to determine first cin
    while (cin >>  current.lat >> current.lon){          // read in lines
        if (i == 0){    // if first entry, set previous initialization
            previous = current;
            i = 1;
        }
        dist +=  GCDistance(&previous,&current);    //add calculated new distance to previous
        previous = current;                         //save current values in previous struct
    }

    if (!cin.eof()){                        // display if there is an error
        cerr << "Problem here..." << endl;
        return 1;
    }
    cout << "All input read" << endl;       // end gracefully
    
    cout << dist << " miles" << endl;         // change to lower case and increment
    
    return 0;
}

double GCDistance(const Point* darcy, const Point* kevin){
    double Eradius = 3959;                              //earth's radius in miles
    double dlat = (kevin->lat - darcy->lat)*M_PI/180;   //find delta latitude rads
    double dlon = (kevin->lon - darcy->lon)*M_PI/180;   //find delta longitude rads
    double lat1 = (darcy->lat)*M_PI/180;                //previous lat
    double lat2 = (kevin->lat)*M_PI/180;                //current lat
    double distance = Eradius*2*asin(sqrt( pow(sin((dlat)/2),2) + cos(lat1)*cos(lat2)*pow(sin((dlon)/2),2) ) ); //math
    return distance;
}
