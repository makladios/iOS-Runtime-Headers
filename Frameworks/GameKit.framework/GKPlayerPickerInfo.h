/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGameMatch, GKPlayer, NSAttributedString, NSDate;

@interface GKPlayerPickerInfo : NSObject {
    NSAttributedString *_achievementString;
    BOOL _canSelectPlayer;
    GKGameMatch *_gameMatch;
    BOOL _hasAchievement;
    BOOL _hasRank;
    BOOL _nearby;
    GKPlayer *_player;
    NSAttributedString *_rankString;
    unsigned int _selectionStatus;
    NSDate *_sortDate;
}

@property(retain) NSAttributedString * achievementString;
@property(readonly) BOOL canSelectPlayer;
@property(retain) GKGameMatch * gameMatch;
@property BOOL hasAchievement;
@property BOOL hasRank;
@property BOOL nearby;
@property(readonly) BOOL playedGame;
@property(retain) GKPlayer * player;
@property(retain) NSAttributedString * rankString;
@property(readonly) unsigned int selectionStatus;
@property(retain) NSDate * sortDate;

- (void)_setSelectionStatus:(unsigned int)arg1;
- (id)achievementString;
- (BOOL)canSelectPlayer;
- (void)dealloc;
- (id)description;
- (id)gameMatch;
- (BOOL)hasAchievement;
- (BOOL)hasRank;
- (BOOL)nearby;
- (BOOL)playedGame;
- (id)player;
- (void)prepareForLoad;
- (id)rankString;
- (unsigned int)selectionStatus;
- (void)setAchievementString:(id)arg1;
- (void)setGameMatch:(id)arg1;
- (void)setHasAchievement:(BOOL)arg1;
- (void)setHasRank:(BOOL)arg1;
- (void)setNearby:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRankString:(id)arg1;
- (void)setSortDate:(id)arg1;
- (id)sortDate;

@end
