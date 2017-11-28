#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> dynamiclly_allocate()
{
  return std::make_shared<std::vector<int>>();
}

std::shared_ptr<std::vector<int>> initialize(std::shared_ptr<std::vector<int>> p)
{
  int i;
  while(std::cin >> i)
  {
    p->push_back(i);
  }

  return p;
}

auto print(std::shared_ptr<std::vector<int>> p) -> std::ostream &
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

  return 0;
}
