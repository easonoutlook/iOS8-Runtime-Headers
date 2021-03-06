/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSArray;

@interface _HKCompoundFilter : _HKFilter  {
    NSArray *_subfilters;
    unsigned int _compoundType;
}

@property(readonly) NSArray * subfilters;
@property(readonly) unsigned int compoundType;

+ (BOOL)supportsSecureCoding;
+ (id)filterWithSubfilters:(id)arg1 compoundType:(unsigned int)arg2;

- (unsigned int)compoundType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)subfilters;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
