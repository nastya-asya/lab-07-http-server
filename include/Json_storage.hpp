// Copyright 2020 Anastasiya Smirnova nastya.asya08@yandex.ru

#ifndef INCLUDE_JSON_STORAGE_HPP_
#define INCLUDE_JSON_STORAGE_HPP_

#include <nlohmann/json.hpp>
#include <string>
using json = nlohmann::json;

class Json_storage {
 public:
  explicit Json_storage(const std::string& filename);
  json get_storage() const;
  void Load();

 private:
  std::string filename_;
  json storage_;
};

#endif  // INCLUDE_JSON_STORAGE_HPP_
