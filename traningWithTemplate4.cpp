# include <iostream>
# include <iomanip>
constexpr auto gravity { 9.8 };

void physics () {
  std :: cout << "a person is pushing a box wiht a force but the box is not moving " << '\n';
  std :: cout << "at the second force with a diffrent force the box is moving " << '\n';
  std :: cout << "press any key to continue : " << '\n'; 
  std :: string keyBoard {};
  std :: cin >> keyBoard;
  std :: cout << '\n';
  std :: cout << '\n';
}


template < typename T > 
T getMass () {
  std :: cout << "enter the mass of the box in Kg : " << '\n';
  T mass {};
  std :: cin >> mass;

return mass;
}

template < typename T > 
T firstForce () {
  std :: cout << "enter the first force of the person in N : " << '\n';
  T force {};
  std :: cin >> force;

return force;
}


template < typename T >
T secondForce () {
  std :: cout << "enter the second force of the person when the box is moving in  N : " << '\n';
  T force {};
  std :: cin >> force;
  
return force;
}

template < typename T > 
T secondForceAfterMove () {
  std :: cout << "enter the force of the person after the box moved from the second force in N : " << '\n';
  T force {};
  std :: cin >> force;

return force;
}


template < typename T >
T kineticFrictionCoefficient () {
  std :: cout << "enter the Kinetic friction coefficient of the box in N : " << '\n';
  T mk {};
  std :: cin >> mk; 

return mk;
}

auto reasult ( double F1 ) {
  std :: cout << "the static force when the box is not moving is : " << F1 << 'N' << '\n';

} 

auto reasult () {
  auto F2 { secondForce < double > () };
  std :: cout << "the static force when the box is moving is : " << F2 << 'N' << '\n';

}

auto reasult ( double F2 , double mass ) {
  std :: cout << "the static friction coefficient between the surfece and the box is " << F2 / ( mass * gravity) << 'N' << '\n';

}

auto reasult ( double F3 , double mass , double mk ) {
  std :: cout << "the accelaration of the box is : " <<  ( F3 - ( mk * ( mass * gravity ) ) ) / mass << " m/s2 "  << '\n';

}


template < typename O  , typename I , typename TF >
auto option () {
  again:
  std :: cout << "enter 1 : caculate the static firction when the box still resident at the first force " << '\n';
  std :: cout << "enter 2 : caculete the static firction when the box is moving at the second force " << '\n';
  std :: cout << "enter 3 : caculate the static friction coefficient between the surfece and the box " << '\n';
  std :: cout << "enter 4 : caculate the accelaration after the box moved at the second force " << '\n';
  std :: cout << "enter 5 : caculate all " << '\n';
  I opt= {};
  std :: cin >> opt;

  if ( opt != 1 && opt != 2 && opt != 3 && opt != 4 && opt != 5 ) {
    std :: cout << "not suitable number " << '\n';
    std :: cout << "try again" << '\n';
    goto again;
  }

  switch ( opt ) {

    case 1 :
      std :: cout << "you entered 1 " << '\n';
      reasult ( firstForce < double > () ); 
      break;
    
    case 2 :
      std :: cout << "you entered 2 " << '\n';
      reasult (); 
      break;

    case 3 :
      std :: cout << "you enterd 3 " << '\n';
      reasult ( secondForce < double > () , getMass < double > () );
      break; 

    case 4 :
      std :: cout << "you entered 4 " << '\n';
      reasult ( secondForceAfterMove < double > () , getMass < double > () , kineticFrictionCoefficient < double > () );
      break;

    case 5 :
      std :: cout << "you entered 5 " << '\n';
      reasult ( firstForce < double > () ); 
      reasult (); 
      reasult ( secondForce < double > () , getMass < double > () );
      reasult ( secondForceAfterMove < double > () , getMass < double > () , kineticFrictionCoefficient < double > () );
      break;
  }

  std :: cout << "enter true : make random numbers " << '\n';
  std :: cout << "enter flase : end the program " << '\n';
  TF trueOrFlase {};
  std :: cin >> trueOrFlase;
  
  if ( trueOrFlase ) {
    std :: cout << "you entered true " << '\n';

  }

  else
    std :: cout << "you entered false " << '\n';


}




int main () {
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha;
  std :: cout << std :: setprecision ( 3 ); 
  physics ();
  option < long double , int , bool > (); 
  std :: cout << "the program has been ended press any key to quit : " << '\n';
  std :: string keyBoard {};
  std :: cin >> keyBoard;

return 0; 
}