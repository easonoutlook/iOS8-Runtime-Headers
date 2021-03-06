/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, NSString, NSDictionary;

@interface CKObjCClass : NSObject  {
    Class _handle;
    NSString *_name;
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}

@property(readonly) Class handle;
@property(readonly) NSString * name;
@property(readonly) NSDictionary * propertiesByName;
@property(readonly) NSArray * sortedProperties;

+ (id)classForObject:(id)arg1;
+ (id)classForHandle:(Class)arg1;

- (id)propertiesByName;
- (id)propertyForName:(id)arg1;
- (id)allProperties;
- (Class)handle;
- (id)initWithHandle:(Class)arg1;
- (void).cxx_destruct;
- (id)name;
- (id)sortedProperties;

@end
