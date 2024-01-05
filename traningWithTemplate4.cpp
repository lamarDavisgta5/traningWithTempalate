# include <iostream>
# include <iomanip>
# include <random>
# include <chrono>
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

int sequnceNumber () {
  again:
  std :: cout << "enter the number of the sequnce : " << '\n';
  int SN {};
  std :: cin >> SN;
  

return SN;
}

template < typename T >
T getOption1 () {
  again:
  std :: cout << "enter the option one between 1 to 4 : " << '\n';
  T opt {};
  std :: cin >> opt;
  if ( opt != 1 && opt != 2 && opt != 3 && opt != 4 ) {
    std :: cout << "not suitable number " << '\n';
    std :: cout << "try again " << '\n';
    goto again;
  }


return opt;
}


template < typename T >
T getOption2 () {
  again:
  std :: cout << "enter the option two between 1 to 4 : " << '\n';
  T opt {};
  std :: cin >> opt;
  if ( opt != 1 && opt != 2 && opt != 3 && opt != 4 ) {
    std :: cout << "not suitable number " << '\n';
    std :: cout << "try again " << '\n';
    goto again;
  }


return opt;
}


template < typename T >
void randomNumbers ( T optionOne , T optionTwo ) {
  auto SN { sequnceNumber () };
  std :: mt19937_64 randoMaker { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now () . time_since_epoch () . count () ) };

  if ( optionOne > optionTwo ) {
    std :: cout << "your random number between " << optionTwo << " and " << optionOne << " is : " << '\n';
    std :: uniform_int_distribution period ( optionTwo , optionOne );

    for ( int counter { 1 }; counter <= SN; ++ counter ) {
      std :: cout << period ( randoMaker ) << '\t';

      if ( counter % 10 == 0 ) 
        std :: cout << '\n';

    }

    std :: cout << '\n';

  }

  else if ( optionOne < optionTwo ) {
    std :: cout << "your random number betwwen " << optionOne << " and " << optionTwo << " is : " << '\n';
    std :: uniform_int_distribution period ( optionOne , optionTwo );

    for ( int counter { 1 }; counter <= SN; ++ counter ) {
      std :: cout << period ( randoMaker ) << '\t';

      if ( counter % 10 == 0 ) 
        std :: cout << '\n';

    } 

    std :: cout << '\n';


  }

  else 
    std :: cout << "cant make random numbers due to equality of the two options " << '\n';


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

auto reasult ( double mk , double mass , double F3 ) {
  std :: cout << "the accelaration of the box is : " <<  ( F3 - ( mk * ( mass * gravity ) ) ) / mass << " m/s2 "  << '\n';

}

auto reasult ( double mk , double F3 , double mass , double F2 , double F1 ) {
  std :: cout << "the static force when the box is not moving is : " << F1 << 'N' << '\n';
  std :: cout << "the static force when the box is moving is : " << F2 << 'N' << '\n';
  std :: cout << "the static friction coefficient between the surfece and the box is " << F2 / ( mass * gravity) << 'N' << '\n';
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

  switch ( static_cast < int > ( opt ) ) {

    case 1 :
      std :: cout << "you entered 1 " << '\n';
      reasult ( firstForce < double > () ); 
      return;
    
    case 2 :
      std :: cout << "you entered 2 " << '\n';
      reasult (); 
      return;

    case 3 :
      std :: cout << "you enterd 3 " << '\n';
      reasult ( secondForce < double > () , getMass < double > () );
      return; 

    case 4 :
      std :: cout << "you entered 4 " << '\n';
      reasult ( kineticFrictionCoefficient < double > () , getMass < double > () ,  secondForceAfterMove < double > () ) ;
      return;

    case 5 :
      std :: cout << "you entered 5 " << '\n';
      break;
  }

  auto F1 { firstForce < double > () };
  auto F2 { secondForce < double > () };
  auto mass { getMass < double > () };
  auto F3 { secondForceAfterMove < double > () };
  auto mk { kineticFrictionCoefficient < double > () };

  std :: cout << "the static firiction when the box is not moving is : " << F1 << 'N' << '\n';
  std :: cout << "the static friction when the box is moving is : " << F2 << 'N' << '\n';
  std :: cout << "the static friction coefficient between the surfece and the box is " << F2 / ( mass * gravity) << 'N' << '\n';
  std :: cout << "the accelaration of the box is : " <<  ( F3 - ( mk * ( mass * gravity ) ) ) / mass << " m/s2 "  << '\n';

  std :: cout << "enter true : make random numbers " << '\n';
  std :: cout << "enter false : end the program " << '\n';
  TF trueOrFlase {};
  std :: cin >> trueOrFlase;
  
  if ( trueOrFlase ) {
    std :: cout << "you entered true " << '\n';
    std :: cout << "you make random numbers between these four option " << '\n';
    std :: cout << '\n';
    std :: cout << " 1 : static firction in resident stuation " << '\n';
    std :: cout << '\n';
    std :: cout << " 2 : static firction when the box is moving at the second force " << '\n';
    std :: cout << '\n';
    std :: cout << " 3 : static friction coefficient between the surfece and the box " << '\n';
    std :: cout << '\n';
    std :: cout << " 4 : accelwdaaration after the box moved at the second force " << '\n';
    std :: cout << '\n'; 

    auto opt1 { getOption1 < double > () };
    auto opt2 { getOption2 < double > () };
    
    int static_Firction_At_resident { static_cast < int > ( F1 ) };  // 1
    int static_Firction_At_movement { static_cast < int > ( F2 ) };  // 2 
    int static_Friction_Coefficient { static_cast < int > ( F2 / ( mass * gravity) ) }; // 3
    int accelaration { static_cast < int > ( ( F3 - ( mk * ( mass * gravity ) ) ) / mass ) }; // 4

    
    if ( ( opt1 == 1 && opt2 == 2 ) || ( opt1 == 2 && opt2 == 1 ) ) {
      std :: cout << "you chose option 1 and option 2 : " << '\n';
      randomNumbers ( static_Firction_At_resident , static_Firction_At_movement );

    }

    if ( ( opt1 == 1 && opt2 == 3 ) || ( opt1 == 3 && opt2 == 1 ) ) {
      std :: cout << "you chose option 1 and option 3 " << '\n';
      randomNumbers ( static_Firction_At_resident , static_Friction_Coefficient );

    }

    if ( ( opt1 == 1 && opt2 == 4 ) || ( opt1 == 4 && opt2 == 1 ) ) {
      std :: cout << "you chose option 1 and option 4 " << '\n';
      randomNumbers ( static_Firction_At_resident , accelaration );
    
    }

    if ( ( opt1 == 2 && opt2 == 3 ) || ( opt1 == 3 && opt2 == 2 ) ) {
      std :: cout << "you chose option 2 and option 3 " << '\n';
      randomNumbers ( static_Firction_At_movement , static_Friction_Coefficient );
    }

    if ( ( opt1 == 2 && opt2 == 4 ) || ( opt1 == 4 && opt2 == 2 ) ) {
      std :: cout << "you chose option 2 and option 4 " << '\n';
      randomNumbers ( static_Firction_At_movement , accelaration );
    }

    if ( ( opt1 == 3 && opt2 == 4 ) || ( opt1 == 4 && opt2 == 3 ) ) {
      std :: cout << "you chose option 3 and option 4 " << '\n';
      randomNumbers ( static_Friction_Coefficient , accelaration );

    }


  }

  else
    std :: cout << "you entered false " << '\n';


}




int main () {
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha;
  std :: cout << std :: setprecision ( 3 ); 
  physics ();
  option < long double , double , bool > (); 
  std :: cout << "the program has been ended press any key to quit : " << '\n';
  std :: string keyBoard {};
  std :: cin >> keyBoard;

return 0; 
}
