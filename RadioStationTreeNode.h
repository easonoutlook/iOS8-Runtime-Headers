/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSString, RadioArtworkCollection, NSDictionary;

@interface RadioStationTreeNode : NSObject <NSCopying, NSMutableCopying> {
    RadioArtworkCollection *_artworkCollection;
    int _childNodeLoadingStyle;
    NSArray *_childNodes;
    int _displayStyle;
    BOOL _hasAdditionalChildNodes;
    NSString *_name;
    long long _nodeID;
    NSDictionary *_stationDictionary;
    NSDictionary *_stationTreeNodeDictionary;
}

@property(copy,readonly) RadioArtworkCollection * artworkCollection;
@property(readonly) int childNodeLoadingStyle;
@property(copy,readonly) NSArray * childNodes;
@property(readonly) int displayStyle;
@property(readonly) BOOL hasAdditionalChildNodes;
@property(copy,readonly) NSString * name;
@property(readonly) long long nodeID;
@property(copy,readonly) NSDictionary * stationDictionary;
@property(copy,readonly) NSDictionary * stationTreeNodeDictionary;


- (int)displayStyle;
- (id)initWithStationTreeNodeDictionary:(id)arg1;
- (id)stationDictionary;
- (int)childNodeLoadingStyle;
- (BOOL)hasAdditionalChildNodes;
- (id)stationTreeNodeDictionary;
- (long long)nodeID;
- (id)artworkCollection;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)childNodes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)description;

@end
