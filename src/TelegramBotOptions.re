// [@bs.deriving abstract]
// type t = {
//   [@bs.optional]
//   polling: Js.Nullable.t(bool),
//   [@bs.optional]
//   webHook: Js.Nullable.t(bool),
// };
type t = {
  polling: option(Js.Nullable.t(bool)),
  webHook: option(Js.Nullable.t(bool)),
};
let t =
    (
      ~polling: option(Js.Nullable.t(bool)),
      ~webHook: option(Js.Nullable.t(bool)),
    ) => {
  polling,
  webHook,
};