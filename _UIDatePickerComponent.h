/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIDatePickerComponent : NSObject  {
    unsigned int _equivalentUnit;
    NSString *_formatString;
    unsigned int _calendarUnit;
    float _width;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _unitRange;
}

@property(readonly) NSString * formatString;
@property(readonly) unsigned int calendarUnit;
@property(readonly) unsigned int equivalentUnit;
@property struct _NSRange { unsigned int x1; unsigned int x2; } unitRange;
@property float width;

+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(int)arg3;
+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2;

- (id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })unitRange;
- (void)setUnitRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)equivalentUnit;
- (id)formatString;
- (unsigned int)calendarUnit;
- (void)setWidth:(float)arg1;
- (float)width;
- (id)description;
- (void)dealloc;

@end