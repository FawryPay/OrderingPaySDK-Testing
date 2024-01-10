#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8 (swiftlang-5.8.0.124.2 clang-1403.0.22.11.100)
#ifndef ORDERINGPAYSDK_SWIFT_H
#define ORDERINGPAYSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="OrderingPaySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


SWIFT_CLASS("_TtC14OrderingPaySDK11CartManager")
@interface CartManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK14CategoryEntity")
@interface CategoryEntity : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;
@class UITouch;
@class UIEvent;

IB_DESIGNABLE
SWIFT_CLASS("_TtC14OrderingPaySDK8CheckBox")
@interface CheckBox : UIControl
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)drawRect:(CGRect)rect;
- (void)layoutSubviews;
- (void)prepareForInterfaceBuilder;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK15CheckoutManager")
@interface CheckoutManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK20ChooseServiceManager")
@interface ChooseServiceManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

IB_DESIGNABLE
SWIFT_CLASS("_TtC14OrderingPaySDK17CustomRadioButton")
@interface CustomRadioButton : UIButton
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull outerCircleColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull innerCircleCircleColor;
@property (nonatomic) IBInspectable CGFloat outerCircleLineWidth;
@property (nonatomic) IBInspectable CGFloat innerCircleGap;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
@property (nonatomic, getter=isSelected) BOOL selected;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK20DeleteAccountManager")
@interface DeleteAccountManager : NSObject
- (void)clearSDK;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC14OrderingPaySDK21ForgetPasswordManager")
@interface ForgetPasswordManager : NSObject
- (void)clearSDK;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC14OrderingPaySDK9ItemImage")
@interface ItemImage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14OrderingPaySDK11LaunchModel")
@interface LaunchModel : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14OrderingPaySDK12LoginManager")
@interface LoginManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC14OrderingPaySDK13LogoutManager")
@interface LogoutManager : NSObject
- (void)clearSDK;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK20MerchantItemCategory")
@interface MerchantItemCategory : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14OrderingPaySDK19MerchantsListManger")
@interface MerchantsListManger : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ENFXGesture : NSInteger;
@class UIViewController;
@class NSString;
@class NSData;

SWIFT_CLASS("_TtC14OrderingPaySDK3NFX")
@interface NFX : NSObject
+ (NFX * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)start;
- (void)stop;
- (BOOL)isStarted SWIFT_WARN_UNUSED_RESULT;
- (void)setCachePolicy:(NSURLCacheStoragePolicy)policy;
- (void)setGesture:(enum ENFXGesture)gesture;
- (void)show;
- (void)showOn:(UIViewController * _Nonnull)rootViewController;
- (void)hide;
- (void)toggle;
- (void)ignoreURL:(NSString * _Nonnull)url;
- (NSData * _Nullable)getSessionLog SWIFT_WARN_UNUSED_RESULT;
- (void)ignoreURLs:(NSArray<NSString *> * _Nonnull)urls;
- (void)ignoreURLsWithRegex:(NSString * _Nonnull)regex;
- (void)ignoreURLsWithRegexes:(NSArray<NSString *> * _Nonnull)regexes;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, ENFXGesture, open) {
  ENFXGestureShake = 0,
  ENFXGestureCustom = 1,
};

@class UIPresentationController;

@interface NFX (SWIFT_EXTENSION(OrderingPaySDK)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerDidDismiss:(UIPresentationController * _Nonnull)presentationController;
@end


@class NSURLComponents;
@class NSURLQueryItem;
@class NSDate;
@class NSURL;

SWIFT_CLASS("_TtC14OrderingPaySDK12NFXHTTPModel")
@interface NFXHTTPModel : NSObject
@property (nonatomic, copy) NSString * _Nullable requestURL;
@property (nonatomic, copy) NSURLComponents * _Nullable requestURLComponents;
@property (nonatomic, copy) NSArray<NSURLQueryItem *> * _Nullable requestURLQueryItems;
@property (nonatomic, copy) NSString * _Nullable requestMethod;
@property (nonatomic, copy) NSString * _Nullable requestCachePolicy;
@property (nonatomic, copy) NSDate * _Nullable requestDate;
@property (nonatomic, copy) NSString * _Nullable requestTime;
@property (nonatomic, copy) NSString * _Nullable requestTimeout;
@property (nonatomic, copy) NSDictionary * _Nullable requestHeaders;
@property (nonatomic, copy) NSString * _Nullable requestType;
@property (nonatomic, copy) NSString * _Nullable requestCurl;
@property (nonatomic, copy) NSString * _Nullable responseType;
@property (nonatomic, copy) NSDate * _Nullable responseDate;
@property (nonatomic, copy) NSString * _Nullable responseTime;
@property (nonatomic, copy) NSDictionary * _Nullable responseHeaders;
@property (nonatomic, copy) NSString * _Nonnull randomHash;
@property (nonatomic, readonly, copy) NSString * _Nonnull shortTypeString;
@property (nonatomic) BOOL noResponse;
- (NSString * _Nonnull)getRequestBody SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBody SWIFT_WARN_UNUSED_RESULT;
- (NSURL * _Nonnull)getRequestBodyFileURL SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRequestBodyFilename SWIFT_WARN_UNUSED_RESULT;
- (NSURL * _Nonnull)getResponseBodyFileURL SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getResponseBodyFilename SWIFT_WARN_UNUSED_RESULT;
- (void)saveData:(NSString * _Nonnull)dataString to:(NSURL * _Nonnull)fileURL;
- (NSData * _Nullable)readRawDataFrom:(NSURL * _Nonnull)fileURL SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getTimeFromDate:(NSDate * _Nonnull)date SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isSuccessful SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedRequestLogEntry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedResponseLogEntry SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLRequest;
@class NSURLSessionTask;
@class NSCachedURLResponse;
@protocol NSURLProtocolClient;

SWIFT_CLASS("_TtC14OrderingPaySDK11NFXProtocol")
@interface NFXProtocol : NSURLProtocol
+ (BOOL)canInitWithRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canInitWithTask:(NSURLSessionTask * _Nonnull)task SWIFT_WARN_UNUSED_RESULT;
- (void)startLoading;
- (void)stopLoading;
+ (NSURLRequest * _Nonnull)canonicalRequestForRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithRequest:(NSURLRequest * _Nonnull)request cachedResponse:(NSCachedURLResponse * _Nullable)cachedResponse client:(id <NSURLProtocolClient> _Nullable)client OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;
@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSHTTPURLResponse;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;

@interface NFXProtocol (SWIFT_EXTENSION(OrderingPaySDK)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end





SWIFT_CLASS("_TtC14OrderingPaySDK19OrderingPaySDKError")
@interface OrderingPaySDKError : NSObject
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic) NSInteger code;
@property (nonatomic, readonly, copy) NSString * _Nullable errorDescription;
@property (nonatomic, readonly, copy) NSString * _Nullable failureReason;
@property (nonatomic) id _Nullable returnedResponse;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14OrderingPaySDK21OrderingPaySDKManager")
@interface OrderingPaySDKManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK13OrdersManager")
@interface OrdersManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK18PaginatedTableView")
@interface PaginatedTableView : UITableView
- (nonnull instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end

@class NSIndexPath;

@interface PaginatedTableView (SWIFT_EXTENSION(OrderingPaySDK)) <UITableViewDataSourcePrefetching>
- (void)tableView:(UITableView * _Nonnull)tableView prefetchRowsAtIndexPaths:(NSArray<NSIndexPath *> * _Nonnull)indexPaths;
@end

@class UIScrollView;

@interface PaginatedTableView (SWIFT_EXTENSION(OrderingPaySDK))
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end

@class UITableViewCell;
@class UIView;

@interface PaginatedTableView (SWIFT_EXTENSION(OrderingPaySDK)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView estimatedHeightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didEndDisplayingCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSString * _Nullable)tableView:(UITableView * _Nonnull)tableView titleForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableViewCellEditingStyle)tableView:(UITableView * _Nonnull)tableView editingStyleForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP14OrderingPaySDK28PaginatedTableViewDataSource_")
@protocol PaginatedTableViewDataSource
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAt:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsIn:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
@optional
- (UITableViewCellEditingStyle)tableView:(UITableView * _Nonnull)tableView editingStyleForRowAt:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView commit:(UITableViewCellEditingStyle)editingStyle forRowAt:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_PROTOCOL("_TtP14OrderingPaySDK26PaginatedTableViewDelegate_")
@protocol PaginatedTableViewDelegate
@optional
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAt:(NSIndexPath * _Nonnull)indexPath;
@required
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAt:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@optional
- (CGFloat)tableView:(UITableView * _Nonnull)tableView estimatedHeightForRowAt:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplay:(UITableViewCell * _Nonnull)cell forRowAt:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didEndDisplaying:(UITableViewCell * _Nonnull)cell forRowAt:(NSIndexPath * _Nonnull)indexPath;
@required
- (void)loadMore:(NSInteger)pageNumber :(NSInteger)pageSize;
@optional
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK7Product")
@interface Product : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC14OrderingPaySDK13ProductOption")
@interface ProductOption : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIImage;
@class UIGestureRecognizer;

SWIFT_CLASS("_TtC14OrderingPaySDK15RangeSeekSlider")
@interface RangeSeekSlider : UIControl
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// The minimum possible value to select in the range
@property (nonatomic) IBInspectable CGFloat minValue;
/// The maximum possible value to select in the range
@property (nonatomic) IBInspectable CGFloat maxValue;
/// The preselected minumum value
/// (note: This should be less than the selectedMaxValue)
@property (nonatomic) IBInspectable CGFloat selectedMinValue;
/// The preselected maximum value
/// (note: This should be greater than the selectedMinValue)
@property (nonatomic) IBInspectable CGFloat selectedMaxValue;
/// Hides the labels above the slider controls. true = labels will be hidden. false = labels will be shown. Default is false.
@property (nonatomic) IBInspectable BOOL hideLabels;
/// fixes the labels above the slider controls. true: labels will be fixed to both ends. false: labels will move with the handles. Default is false.
@property (nonatomic) IBInspectable BOOL labelsFixed;
/// The minimum distance the two selected slider values must be apart. Default is 0.
@property (nonatomic) IBInspectable CGFloat minDistance;
/// The maximum distance the two selected slider values must be apart. Default is CGFloat.greatestFiniteMagnitude.
@property (nonatomic) IBInspectable CGFloat maxDistance;
/// The color of the minimum value text label. If not set, the default is the tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable minLabelColor;
/// The color of the maximum value text label. If not set, the default is the tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable maxLabelColor;
/// Handle slider with custom color, you can set custom color for your handle
@property (nonatomic, strong) IBInspectable UIColor * _Nullable handleColor;
/// Handle slider with custom border color, you can set custom border color for your handle
@property (nonatomic, strong) IBInspectable UIColor * _Nullable handleBorderColor;
/// Set slider line tint color between handles
@property (nonatomic, strong) IBInspectable UIColor * _Nullable colorBetweenHandles;
/// The color of the entire slider when the handle is set to the minimum value and the maximum value. Default is nil.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable initialColor;
/// If true, the control will mimic a normal slider and have only one handle rather than a range.
/// In this case, the selectedMinValue will be not functional anymore. Use selectedMaxValue instead to determine the value the user has selected.
@property (nonatomic) IBInspectable BOOL disableRange;
/// If true the control will snap to point at each step between minValue and maxValue. Default is false.
@property (nonatomic) IBInspectable BOOL enableStep;
/// The step value, this control the value of each step. If not set the default is 0.0.
/// (note: this is ignored if <= 0.0)
@property (nonatomic) IBInspectable CGFloat step;
/// Handle slider with custom image, you can set custom image for your handle
@property (nonatomic, strong) IBInspectable UIImage * _Nullable handleImage;
/// Handle diameter (default 16.0)
@property (nonatomic) IBInspectable CGFloat handleDiameter;
/// Selected handle diameter multiplier (default 1.7)
@property (nonatomic) IBInspectable CGFloat selectedHandleDiameterMultiplier;
/// Set the slider line height (default 1.0)
@property (nonatomic) IBInspectable CGFloat lineHeight;
/// Handle border width (default 0.0)
@property (nonatomic) IBInspectable CGFloat handleBorderWidth;
/// Set padding between label and handle (default 8.0)
@property (nonatomic) IBInspectable CGFloat labelPadding;
/// The label displayed in accessibility mode for minimum value handler. If not set, the default is empty String.
@property (nonatomic, copy) IBInspectable NSString * _Nullable minLabelAccessibilityLabel;
/// The label displayed in accessibility mode for maximum value handler. If not set, the default is empty String.
@property (nonatomic, copy) IBInspectable NSString * _Nullable maxLabelAccessibilityLabel;
/// The brief description displayed in accessibility mode for minimum value handler. If not set, the default is empty String.
@property (nonatomic, copy) IBInspectable NSString * _Nullable minLabelAccessibilityHint;
/// The brief description displayed in accessibility mode for maximum value handler. If not set, the default is empty String.
@property (nonatomic, copy) IBInspectable NSString * _Nullable maxLabelAccessibilityHint;
- (void)layoutSubviews;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (BOOL)continueTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
- (NSInteger)accessibilityElementCount SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)accessibilityElementAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)indexOfAccessibilityElement:(id _Nonnull)element SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@class CALayer;

SWIFT_CLASS("_TtC14OrderingPaySDK11RangeSlider")
@interface RangeSlider : UIControl
@property (nonatomic) IBInspectable double minimumValue;
@property (nonatomic) IBInspectable double maximumValue;
@property (nonatomic) IBInspectable double lowerValue;
@property (nonatomic) IBInspectable double upperValue;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull trackTintColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull trackHighlightTintColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull thumbTintColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull thumbBorderColor;
@property (nonatomic) IBInspectable CGFloat thumbBorderWidth;
@property (nonatomic) IBInspectable CGFloat curvaceousness;
@property (nonatomic) CGRect frame;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSublayersOfLayer:(CALayer * _Nonnull)of;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (BOOL)continueTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
@end


SWIFT_CLASS("_TtC14OrderingPaySDK15RegisterManager")
@interface RegisterManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)clearSDK;
@end











@interface UIButton (SWIFT_EXTENSION(OrderingPaySDK))
- (void)sendAction:(SEL _Nonnull)action to:(id _Nullable)target forEvent:(UIEvent * _Nullable)event;
@end


@interface UICollectionReusableView (SWIFT_EXTENSION(OrderingPaySDK))
- (void)awakeFromNib;
@end



@interface UICollectionViewFlowLayout (SWIFT_EXTENSION(OrderingPaySDK))
@property (nonatomic, readonly) BOOL flipsHorizontallyInOppositeLayoutDirection;
@end















@interface UILabel (SWIFT_EXTENSION(OrderingPaySDK))
- (void)cstmlayoutSubviews;
@end






@interface UITableViewCell (SWIFT_EXTENSION(OrderingPaySDK))
- (void)awakeFromNib;
@end


@interface UITextField (SWIFT_EXTENSION(OrderingPaySDK))
- (void)cstmlayoutSubviews;
@end















@interface UIViewController (SWIFT_EXTENSION(OrderingPaySDK))
@property (nonatomic) BOOL resolving;
@end










@interface UIWindow (SWIFT_EXTENSION(OrderingPaySDK))
- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent * _Nullable)event;
@end





SWIFT_CLASS("_TtC14OrderingPaySDK7Variant")
@interface Variant : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14OrderingPaySDK21VerifyCustomerManager")
@interface VerifyCustomerManager : NSObject
- (void)clearSDK;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
