
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