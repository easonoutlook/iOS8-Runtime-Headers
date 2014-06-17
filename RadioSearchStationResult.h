/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSDictionary;

@interface RadioSearchStationResult : NSObject <NSCopying> {
    NSDictionary *_highlightRanges;
    NSDictionary *_stationDictionary;
}

@property(copy,readonly) NSDictionary * highlightRanges;
@property(copy,readonly) NSDictionary * stationDictionary;


- (id)highlightRanges;
- (id)stationDictionary;
- (id)_initWithResponseDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end