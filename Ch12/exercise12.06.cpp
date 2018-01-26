#include <iostream>
#include <vector>

std::vector<int> *dynamiclly_allocate()
{
  return new std::vector<int>{ };
}

std::vector<int> *initialize(std::vector<int> *p)
{
  int i;
  while(std::cin >> i)
  {
    p->push_back(i);
  }

  return p;
}

auto print(std::vector<int> *p) -> std::ostream &
{
  for(auto i : *p)
  {
    std::cout << i << " ";
  }

  return std::cout;
}

int main()
{
  auto vec = initialize(dynamiclly_allocate());
  print(vec) << std::endl;
  delete vec;

  return 0;
}
