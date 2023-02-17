/* 
 *  Copyright (C) 2021 mod.io Pty Ltd. <https://mod.io>
 *  
 *  This file is part of the mod.io SDK.
 *  
 *  Distributed under the MIT License. (See accompanying file LICENSE or 
 *   view online at <https://github.com/modio/modio-sdk/blob/main/LICENSE>)
 *  
 */

#pragma once
// Autogenerated file - do not edit directly!
// Should never be included directly - include ModioHttpParams.h instead

namespace Modio 
{
    namespace Detail
    {
        static const HttpRequestParams GetCurrentAgreementRequest { Modio::Detail::Verb::GET, "/agreements/types/{agreement-type-id}/current" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetAgreementVersionRequest { Modio::Detail::Verb::GET, "/agreements/versions/{agreement-version-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams TermsRequest { Modio::Detail::Verb::GET, "/authenticate/terms" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaDiscordRequest { Modio::Detail::Verb::POST, "/external/discordauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaFacebookRequest { Modio::Detail::Verb::POST, "/external/facebookauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaGogGalaxyRequest { Modio::Detail::Verb::POST, "/external/galaxyauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaGoogleRequest { Modio::Detail::Verb::POST, "/external/googleauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaItchioRequest { Modio::Detail::Verb::POST, "/external/itchioauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaOculusRequest { Modio::Detail::Verb::POST, "/external/oculusauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaOpenidRequest { Modio::Detail::Verb::POST, "/external/openid" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaPsnRequest { Modio::Detail::Verb::POST, "/external/psnauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaSteamRequest { Modio::Detail::Verb::POST, "/external/steamauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaSwitchRequest { Modio::Detail::Verb::POST, "/external/switchauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaXboxLiveRequest { Modio::Detail::Verb::POST, "/external/xboxauth" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetGamesRequest { Modio::Detail::Verb::GET, "/games" }; 
        static const HttpRequestParams GetGameRequest { Modio::Detail::Verb::GET, "/games/{game-id}" }; 
        static const HttpRequestParams AddGuideCommentKarmaRequest { Modio::Detail::Verb::POST, "/games/{game-id}/guides/{guide-id}/comments/{comment-id}/karma" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddGameMediaRequest { Modio::Detail::Verb::POST, "/games/{game-id}/media" , "multipart/form-data" }; 
        static const HttpRequestParams GetModsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods" }; 
        static const HttpRequestParams AddModRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods" , "multipart/form-data" }; 
        static const HttpRequestParams GetModsEventsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/events" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModsStatsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/stats" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteModRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}" , "multipart/form-data" }; 
        static const HttpRequestParams GetModRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}" }; 
        static const HttpRequestParams EditModRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}" , "multipart/form-data" }; 
        static const HttpRequestParams GetModCommentsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/comments" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModCommentRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/comments" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteModCommentRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/comments/{comment-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModCommentRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/comments/{comment-id}" }; 
        static const HttpRequestParams UpdateModCommentRequest { Modio::Detail::Verb::PUT, "/games/{game-id}/mods/{mod-id}/comments/{comment-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModCommentKarmaRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/comments/{comment-id}/karma" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteModDependenciesRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/dependencies" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModDependenciesRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/dependencies" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModDependenciesRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/dependencies" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModEventsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/events" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModfilesRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/files" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModfileRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/files" , "multipart/form-data" }; 
        static const HttpRequestParams DeleteMultipartUploadSessionRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/files/multipart" }; 
        static const HttpRequestParams GetMultipartUploadPartsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/files/multipart" }; 
        static const HttpRequestParams CreateMultipartUploadSessionRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/files/multipart" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddMultipartUploadPartRequest { Modio::Detail::Verb::PUT, "/games/{game-id}/mods/{mod-id}/files/multipart" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams CompleteMultipartUploadSessionRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/files/multipart/complete" }; 
        static const HttpRequestParams GetMultipartUploadSessionsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/files/multipart/sessions" }; 
        static const HttpRequestParams DeleteModfileRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/files/{file-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModfileRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/files/{file-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams EditModfileRequest { Modio::Detail::Verb::PUT, "/games/{game-id}/mods/{mod-id}/files/{file-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams ManagePlatformStatusRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/files/{file-id}/platforms" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteModMediaRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/media" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModMediaRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/media" , "multipart/form-data" }; 
        static const HttpRequestParams ReorderModMediaRequest { Modio::Detail::Verb::PUT, "/games/{game-id}/mods/{mod-id}/media/reorder" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteModKvpMetadataRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/metadatakvp" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModKvpMetadataRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/metadatakvp" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModKvpMetadataRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/metadatakvp" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModPriceRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/price" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModRatingRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/ratings" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModStatsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/stats" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams UnsubscribeFromModRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/subscribe" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams SubscribeToModRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/subscribe" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteModTagsRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/tags" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModTagsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/tags" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModTagsRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/tags" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetModTeamMembersRequest { Modio::Detail::Verb::GET, "/games/{game-id}/mods/{mod-id}/team" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddModTeamMemberRequest { Modio::Detail::Verb::POST, "/games/{game-id}/mods/{mod-id}/team" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteModTeamMemberRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/mods/{mod-id}/team/{team-member-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams UpdateModTeamMemberRequest { Modio::Detail::Verb::PUT, "/games/{game-id}/mods/{mod-id}/team/{team-member-id}" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetGameStatsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/stats" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams DeleteGameTagOptionRequest { Modio::Detail::Verb::DELETE, "/games/{game-id}/tags" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetGameTagOptionsRequest { Modio::Detail::Verb::GET, "/games/{game-id}/tags" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AddGameTagOptionRequest { Modio::Detail::Verb::POST, "/games/{game-id}/tags" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetResourceOwnerRequest { Modio::Detail::Verb::POST, "/general/ownership" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetAuthenticatedUserRequest { Modio::Detail::Verb::GET, "/me" }; 
        static const HttpRequestParams GetUserEventsRequest { Modio::Detail::Verb::GET, "/me/events" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams GetUserModfilesRequest { Modio::Detail::Verb::GET, "/me/files" }; 
        static const HttpRequestParams GetUserGamesRequest { Modio::Detail::Verb::GET, "/me/games" }; 
        static const HttpRequestParams GetUserModsRequest { Modio::Detail::Verb::GET, "/me/mods" }; 
        static const HttpRequestParams GetUserRatingsRequest { Modio::Detail::Verb::GET, "/me/ratings" }; 
        static const HttpRequestParams GetUserSubscriptionsRequest { Modio::Detail::Verb::GET, "/me/subscribed" }; 
        static const HttpRequestParams GetUsersMutedRequest { Modio::Detail::Verb::GET, "/me/users/muted" }; 
        static const HttpRequestParams ExchangeEmailSecurityCodeRequest { Modio::Detail::Verb::POST, "/oauth/emailexchange" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams RequestEmailSecurityCodeRequest { Modio::Detail::Verb::POST, "/oauth/emailrequest" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams LogoutRequest { Modio::Detail::Verb::POST, "/oauth/logout" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams SubmitReportRequest { Modio::Detail::Verb::POST, "/report" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams UnmuteAUserRequest { Modio::Detail::Verb::DELETE, "/users/{user-id}/mute" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams MuteAUserRequest { Modio::Detail::Verb::POST, "/users/{user-id}/mute" , "application/x-www-form-urlencoded" }; 
        static const HttpRequestParams AuthenticateViaEpicgamesRequest { Modio::Detail::Verb::POST, "external/epicgamesauth" , "application/x-www-form-urlencoded" }; 
    }
}
