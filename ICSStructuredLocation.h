/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString;

@interface ICSStructuredLocation : ICSProperty  {
}

@property(retain) NSString * fmtype;
@property(retain) NSString * title;
@property(retain) NSString * loctype;
@property(retain) NSString * abURLString;
@property double radius;
@property(retain) NSString * displayName;
@property(retain) NSString * address;
@property(retain) NSString * routing;


- (void)setLoctype:(id)arg1;
- (id)loctype;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (BOOL)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)address;
- (void)setAbURLString:(id)arg1;
- (id)abURLString;
- (id)displayName;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setFmtype:(id)arg1;
- (id)fmtype;
- (id)routing;
- (void)setAddress:(id)arg1;

@end
