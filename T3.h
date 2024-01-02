# ifndef T3_H
# define T3_H

template < typename T >
T infos ( T typeOption ) {
  static int num { 1 };
  switch ( num ) {
    case 1 :
      std :: cout << "enter the mass of the box in Kg : " << '\n';
      ++ num;
      break;

    case 2 :
      std :: cout << "enter the force of the worker in N : " << '\n';
      ++ num;
      break;

    case 3 :
      std :: cout << "enter the static absorption coefficient of the box in N : " << '\n';
      ++ num;
      break;

    case 4 :
      std :: cout << "enter the kinetic absorption coefficient of the box in N : " << '\n';
      ++ num;
      break;

    case 5:
      std :: cout << "enter the time to caculate the speed of the pulling in second : " << '\n';
      break;  
  }

  T info {};
  std :: cin >> info;


return info;
}




# endif 