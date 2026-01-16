#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

// 这是一个测试类，用来验证 C++14 环境
class RadarSensor {
 public:
  RadarSensor(int id) : id_(id) {
    std::cout << "Sensor " << id_ << " ready." << std::endl;
  }
  void Ping() const { std::cout << "Sensor " << id_ << " ping!" << std::endl; }

 private:
  int id_;
};

int main() {
  // 测试 C++14 auto 和 vector
  auto sensor_count = 3;
  std::vector<std::shared_ptr<RadarSensor>> sensors;

  // 测试 C++14 make_shared
  for (int i = 0; i < sensor_count; ++i) {
    sensors.push_back(std::make_shared<RadarSensor>(i));
  }

  // 测试 C++14 范围 for 循环
  for (const auto& s : sensors) {
    s->Ping();
  }

  std::cout << "Environment Check Passed!" << std::endl;
  return 0;
}