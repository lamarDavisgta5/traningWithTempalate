# include <iostream>
# include <cmath>
# include "math.h"
# include "T3.h"

void physics () {
  std :: cout << "A worker with a rope is pulling a box in an x axis resident force " << '\n';
  std :: cout << "press any key to see if the box is moving and caculate the speed depending on a infos : " << '\n';
  std :: string keyBoard {};
  std :: cin >> keyBoard;

}

double typeselection () {
  again :
  std :: cout << "enter 1 : intger " << '\n';
  std :: cout << "enter 2 : double " << '\n';
  double opt {};
  std :: cin >> opt;

  if ( opt != 1 && opt != 2 ) {
    std :: cout << "not a suitable number try again " << '\n';
    goto again;
  } 
 
return opt;
}


void anwers () {
  
  auto option { typeselection () };

  if ( option == 1 ) {
    constexpr auto gravity { 9 }; 
    std :: cout << "you chose a intger type  " << '\n';
    auto mass { infos ( 0 ) };
    auto force { infos ( 0 ) };
    auto ms { infos ( 0 ) };
    auto mk { infos ( 0 ) };
    auto time { infos ( 0 ) };
    if ( ( ms * ( mass * gravity ) ) < force ) {
      std :: cout << "the static firtion is : " <<  ms * ( mass * gravity ) << '\n';
      std :: cout << "the box is moving by the worker " << '\n';
      std :: cout << "the kentic firction is : " << mk * ( mass * gravity ) << '\n';
      std :: cout << "the accelaration is : " << ( force - ( mk * ( mass * gravity ) ) ) / mass << " m/s2 "<< '\n';
      auto accelaration { ( force - ( mk * ( mass * gravity ) ) ) / mass };
      std :: cout << "the speed of the box during the pulling is : " << accelaration * time << " m/s2 "  << '\n';
      auto FNPower2 { std :: pow ( ( mass * gravity ) , 2 ) };
      auto mkPower2 { std :: pow ( ( ( mass * gravity ) * mk ) , 2 ) };
      std :: cout << "the surface reaction of the box is : " << std :: sqrt ( FNPower2 + mkPower2 ) << '\n';

    }

    else if ( force < ( ms * ( mass * gravity ) ) ) {
      std :: cout << "the static firtion is : " <<  ms * ( mass * gravity ) << '\n';
      std :: cout << "the box is not moving " << '\n';
      std :: cout << "the accelaration is : " << 0 << " m/s2 " << '\n';
      std :: cout << "the speed of the box during the pulling is : " << 0 << " m/s " << '\n';

    }

    else {
      std :: cout << "the static firction is : " <<  ms * ( mass * gravity )  << '\n';
      std :: cout << "the box is almost moving due to a equlity of the workers foerce and the static firiction " << '\n';
      std :: cout << "the accelaration is : " << 0 << " m/s2 " << '\n';
      std :: cout << "the speed of the box during the pulling is : " << 0 << " m/s " << '\n';
    }


  }

  else {
    constexpr auto gravity { 9.8 };
    std :: cout << "you chose a double type " << '\n';
    auto mass { infos ( 0.0 ) };
    auto force { infos ( 0.0 ) };
    auto ms { infos ( 0.0 ) };
    auto mk { infos ( 0.0 ) };  
    auto time { infos ( 0.0 ) };

    if ( ( ms * ( mass * gravity ) ) < force ) {
      std :: cout << "the static firtion is : " <<  ms * ( mass * gravity ) << '\n';
      std :: cout << "the box is moving by the worker " << '\n';
      std :: cout << "the kentic firction is : " << mk * ( mass * gravity ) << '\n';
      std :: cout << "the accelaration is : " << ( force - ( mk * ( mass * gravity ) ) ) / mass << " m/s2 "<< '\n';
      auto accelaration { ( force - ( mk * ( mass * gravity ) ) ) / mass };
      std :: cout << "the speed of the box during the pulling is : " << accelaration * time << " m/s2 " << '\n';
      auto FNPower2 { std :: pow ( ( mass * gravity ) , 2 ) };
      auto mkPower2 { std :: pow ( ( ( mass * gravity ) * mk ) , 2 ) };
      std :: cout << "the surface reaction of the box is : " << std :: sqrt ( FNPower2 + mkPower2 ) << '\n';



    }

    else if ( force < ( ms * ( mass * gravity ) ) ) {
      std :: cout << "the static firtion is : " <<  ms * ( mass * gravity ) << '\n';
      std :: cout << "the box is not moving " << '\n';
      std :: cout << "the accelaration is : " << 0 << " m/s2 " << '\n';
      std :: cout << "the speed of the box during the pulling is : " << 0 << " m/s2 "  << '\n';

    }

    else {
      std :: cout << "the static firction is : " <<  ms * ( mass * gravity )  << '\n';
      std :: cout << "the box is almost moving due to a equlity of the workers foerce and the static firiction " << '\n';
      std :: cout << "the accelaration is : " << 0 << " m/s2 " << '\n';
      std :: cout << "the speed of the box during the pulling is : " << 0 << " m/s2 "  << '\n';
    }


}

}


int main () {
  physics ();
  anwers (); 

return 0;
}