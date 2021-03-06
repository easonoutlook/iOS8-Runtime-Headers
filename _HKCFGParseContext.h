/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class _HKCFGNodeCache, NSScanner;

@interface _HKCFGParseContext : NSObject  {
    NSScanner *_scanner;
    unsigned int _lengthAllowance;
    unsigned int _recursiveDepth;
    _HKCFGNodeCache *_cache;
}

@property(readonly) NSScanner * scanner;
@property(readonly) unsigned int lengthAllowance;
@property(readonly) unsigned int recursiveDepth;
@property(readonly) _HKCFGNodeCache * cache;


- (void).cxx_destruct;
- (id)cache;
- (unsigned int)recursiveDepth;
- (unsigned int)lengthAllowance;
- (id)scanner;
- (void)increaseLengthAllowance:(unsigned int)arg1;
- (void)decreaseLengthAllowance:(unsigned int)arg1;
- (void)decrementRecursiveDepth;
- (void)incrementRecursiveDepth;
- (id)initWithScanner:(id)arg1 lengthAllowance:(unsigned int)arg2;

@end
