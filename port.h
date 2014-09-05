//
//  port.h
//  YI18
//
//  Created by 薛飞龙 on 14-7-6.
//  Copyright (c) 2014年 Flonger. All rights reserved.
//

#ifndef YI18_port_h
#define YI18_port_h

#define YI18_URL @"http://www.yi18.net/%@"

#pragma mark - 健康知识相关
//健康新闻
#define  NEW_LIST @"http://api.yi18.net/news/list?limit=50"
#define NEW_LIST_TYPE 1

#define NEW_DETIAL @"http://api.yi18.net/news/show?id=%d"
#define NEW_DETIAL_TYPE 2

//健康知识
#define KNOW_LIST @"http://api.yi18.net/lore/list?limit=50"
#define KNOW_LIST_TYPE 1

#define KNOW_DETIAL @"http://api.yi18.net/lore/show?id=%d"
#define KNOW_DETIAL_TYPE 2

//健康一问
#define QUE_LIST @"http://api.yi18.net/ask/list?limit=50"
#define QUE_LIST_TYPE 1

#define QUE_DETIAL @"http://api.yi18.net/ask/show?id=%d"
#define QUE_DETIAL_TYPE 2

//新闻知识搜索
#define QUE_SEARCH @"http://api.yi18.net/ask/search?keyword=%@"
#define QUE_SEARCH_TYPE 1


#pragma mark - 药品相关
//默认药品信息列表
#define DRUG_DEFAULT @"http://api.yi18.net/drug/list?limit=50"
#define DRUG_DEFAULT_TYPE 1

//药品分类列表
#define DRUG_CLASS @"http://api.yi18.net/drug/drugclass"
#define DRUG_CLASS_TYPE 1

//药品信息列表
#define DRUG_LIST @"http://api.yi18.net/drug/list?id=%d&page=%d&limit=50"
#define DRUG_LIST_TYPE 1

//药品信息详情
#define DRUG_DETAIL @"http://api.yi18.net/drug/show?id=%d"
#define DRUG_DETAIL_TYPE 2

//药品搜索
#define DRUG_SEARCH @"http://api.yi18.net/drug/search?keyword=%@&limit=50"
#define DRUG_SEARCH_TYPE 1


#pragma mark - 食疗大全相关
//食品默认列表
#define FOOD_LIST_DEFAULT @"http://api.yi18.net/food/list?limit=50"
#define FOOD_LIST_DEFAULT_TYPE 1
//食品疗效
#define FOOD_BAR @"http://api.yi18.net/food/bar"
#define FOOD_BAR_TYPE 1
//食品疗效列表
#define FOOD_BARLIST @"http://api.yi18.net/food/barlist?id=%d&page=%d&limit=50"
#define FOOD_BARLIST_TYPE 1
//食品详情
#define FOOD_DETAIL @"http://api.yi18.net/food/show?id=%d"
#define FOOD_DETAIL_TYPE 2
//食品搜索
#define FOOD_SEARCH @"http://api.yi18.net/food/search?keyword=%@&limit=50"
#define FOOD_SEARCH_TYPE 1


#pragma mark - 菜谱大全相关
//菜谱默认列表
#define COOK_LIST_DEFAULT @"http://api.yi18.net/cook/list?limit=50"
#define COOK_LIST_DEFAULT_TYPE 1

//菜谱分类
#define COOK_CLASS_1 @"http://api.yi18.net/cook/cookclass"
//菜谱二级分类
#define COOK_CLASS_2 @"http://api.yi18.net/cook/cookclass?id=%d"
#define COOK_CLASS_TYPE 1

//菜谱列表
#define COOK_LIST @"http://api.yi18.net/cook/list?id=%d&page=%d&limit=50"
#define COOK_LIST_TYPE 1

//菜谱详情
#define COOK_DETAIL @"http://api.yi18.net/cook/show?id=%d"
#define COOK_DETAIL_TYPE 2

//菜谱搜索
#define COOK_SEARCH @"http://api.yi18.net/cook/search?keyword=%@&limit=50"
#define COOK_SEARCH_TYPE 1


#pragma mark - 疾病查询相关
//科室列表
#define SECTION_LIST @"http://api.yi18.net/disease/department"
#define SECTION_LIST_TYPE 1

//身体部位
#define BODY_LIST @"http://api.yi18.net/disease/place"
#define BODY_LIST_TYPE 1

//疾病搜索
#define DISEASE_SEARCH @"http://api.yi18.net/disease/search?keyword=%@&limit=50"
#define DISEASE_SEARCH_TYPE 1


//科室列表详情
#define SECTION_AND_BODY_LIST_DETAIL_TYPE 1
#define SECTION_LIST_DETIAL @"http://api.yi18.net/disease/list?did=%d&limit=50"
//身体部位详情
#define BODY_LIST_DETIAL @"http://api.yi18.net/disease/list?pid=%d&limit=50"


//疾病详情
#define DISEASE_DETIAL @"http://api.yi18.net/disease/show?id=%d"
#define DISEASE_DETIAL_TYPE 2



#pragma mark - 检查项目相关
//检查项目分类
#define CHECK_ITEM @"http://api.yi18.net/check/checkclass?limit=50"
#define CHECK_ITEM_TYPE 1

//检查项目列表 id = 分类的id 默认可传null
#define CHECK_LIST @"http://api.yi18.net/check/list?id=%d&page=%d&limit=50"
#define CHECK_LIST_TPYE_TIME @"id"
#define CHECK_LIST_TPYE_COUNT @"count"
#define CHECK_LIST_TPYE 1

//检查项目详情
#define CHECK_DETAIL @"http://api.yi18.net/check/show?id=%d"
#define CHECK_DETAIL_TYPE 2

//检查项目搜索
#define CHECK_SREACH @"http://api.yi18.net/check/search?keyword=%@&page=%d&limit=50"
#define CHECK_SREACH_TYPE 1


#pragma mark - 手术项目相关
//手术科室
#define SURGERY_OFFICE @"http://api.yi18.net/surgery/department?limit=50"
#define SURGERY_OFFICE_TYPE 1

//手术部位
#define SURGERY_BODY @"http://api.yi18.net/surgery/place?limit=50"
#define SURGERY_BODY_TYPE 1

//手术列表 did为科室id  pid为部位id 默认都可为null
#define SURGERY_LIST @"http://api.yi18.net/surgery/list?page=%d&did=%d&pid=%d&limit=50"
#define SURGERY_LIST_TYPE 1

//手术详情
#define SURGERY_DETAIL @"http://api.yi18.net/surgery/show?id=%d"
#define SURGERY_DETAIL_TYPE 2

//手术项目搜索
#define SURGERY_SREACH @"http://api.yi18.net/surgery/search?keyword=%@&page=%d&limit=50"
#define SURGERY_SREACH_TYPE 1


#pragma mark - 医院相关
//地区列表
#define REGION_LIST @"http://api.yi18.net/hospital/region?limit=50"
#define REGION_LIST_TYPE 1

//省份列表
#define PROVINCE_LIST @"http://api.yi18.net/hospital/province?id=%d"
#define PROVINCE_LIST_TYPE 1

//城市列表
#define CITY_LIST @"http://api.yi18.net/hospital/city?id=%d"
#define CITY_LIST_TYPE 1

//医院列表
#define HOSPITAL_LIST_DEFAULT @"http://api.yi18.net/hospital/list?limit=50"
#define HOSPITAL_LIST @"http://api.yi18.net/hospital/list?id=%d&page=%d&type=%@&limit=50"
#define HOSPITAL_LIST_TPYE_TIME @"id"
#define HOSPITAL_LIST_TPYE_COUNT @"count"
#define HOSPITAL_LIST_TPYE_COMMENT @"comment"
#define HOSPITAL_LIST_TPYE 1

//医院定位  x 坐标x  y 坐标y   
#define LOCATION_LIET @"http://api.yi18.net/hospital/location?x=%lf&y=%lf&page=%d&type=%@"
#define LOCATION_LIST_TPYE_TIME @"id"
#define LOCATION_LIST_TPYE_COUNT @"count"
#define LOCATION_LIST_TPYE_COMMENT @"comment"

//定位附近医院
#define HOSPITAL_LOCATION @"http://api.yi18.net/hospital/location?x=%lf&y=%lf"
#define HOSPITAL_LOCATION_TYPE 1

//医院详情
#define HOSPITAL_DETAIL @"http://api.yi18.net/hospital/show?id=%d"
#define HOSPITAL_DETAIL_TYPE 2

//搜索医院
#define HOSPITAL_SREACH @"http://api.yi18.net/hospital/search?keyword=%@&limit=50"
#define HOSPITAL_SREACH_TYPE 1






#endif
