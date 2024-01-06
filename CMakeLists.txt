cmake_minimum_required(VERSION 3.26)
project(StoreManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(StoreManager main.cpp
        entity/Item/Item.cpp
        entity/Item/Item.h
        entity/ShoppingCart/ShoppingCart.cpp
        entity/ShoppingCart/ShoppingCart.h
        engine/AppEngine.cpp
        engine/AppEngine.h
        entity/OrganicItem/OrganicItem.cpp
        entity/OrganicItem/OrganicItem.h
        entity/CannedItem/CannedItem.cpp
        entity/CannedItem/CannedItem.h
)
