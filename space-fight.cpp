#include <iostream>

enum class Planet {
  Mercury = 1,
  Venus,
  Earth,
  Mars,
  Jupiter,
  Saturn,
  Uranus,
  Neptune
};

std::istream &operator>>(std::istream &is, Planet &planet) {
  std::int8_t n;
  is >> n;
  switch (n) {
  case 1:
    planet = Planet::Mercury;
    break;
  case 2:
    planet = Planet::Venus;
    break;
  case 3:
    planet = Planet::Earth;
    break;
  case 4:
    planet = Planet::Mars;
    break;
  case 5:
    planet = Planet::Jupiter;
    break;
  case 6:
    planet = Planet::Saturn;
    break;
  case 7:
    planet = Planet::Uranus;
    break;
  case 8:
    planet = Planet::Neptune;
    break;
  default:
    break;
  }
  return is;
}

double planet_gravity_multiplier(Planet p) {
  switch (p) {
  case Planet::Mercury:
    return 0.38;
  case Planet::Venus:
    return 0.91;
  case Planet::Earth:
    return 1.0;
  case Planet::Mars:
    return 0.38;
  case Planet::Jupiter:
    return 2.34;
  case Planet::Saturn:
    return 1.06;
  case Planet::Uranus:
    return 0.92;
  case Planet::Neptune:
    return 1.19;
  default:
    break;
  }
}

std::string planet_name(Planet p) {
  switch (p) {
  case Planet::Mercury:
    return "Mercury";
  case Planet::Venus:
    return "Venus";
  case Planet::Earth:
    return "Earth";
  case Planet::Mars:
    return "Mars";
  case Planet::Jupiter:
    return "Jupiter";
  case Planet::Saturn:
    return "Saturn";
  case Planet::Uranus:
    return "Uranus";
  case Planet::Neptune:
    return "Neptune";
  default:
    break;
  }
}

int main() {
  double earth_weight;
  Planet planet_number;
  double competing_weight;

  std::cout << "Enter your weight on Earth:\n";
  std::cin >> earth_weight;

  std::cout << "Which planet in our solar system do you want to fight on?\n";
  std::cout << "1: Mercury\n2: Venus\n3: Earth\n4: Mars\n5: Jupiter\n6: "
               "Saturn\n7: Uranus\n8: Neptune\n";
  std::cin >> planet_number;

  competing_weight = earth_weight * planet_gravity_multiplier(planet_number);

  std::cout << "Your competing weight is " << competing_weight << " kg.";
}
