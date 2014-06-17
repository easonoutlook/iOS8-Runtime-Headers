/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject  {
    NSMutableDictionary *_names;
}

+ (void)invalidate;
+ (id)defaultMappingGenerator;

- (void)dealloc;
- (id)init;
- (id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned int)arg2;
- (id)generateTableName:(id)arg1;
- (id)newGeneratedPropertyName:(id)arg1;
- (id)uniqueNameWithBase:(id)arg1;

@end
